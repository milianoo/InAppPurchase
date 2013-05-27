//
//  AppPurchaseHelper.h
//  In App Purchase
//
//  Created by Milad Rezazadeh on 5/26/13.
//  Copyright (c) 2013 mindvalley. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>
UIKIT_EXTERN NSString *const AppPurchaseHelperProductPurchasedNotification;
typedef void (^RequestProductsCompletionHandler)(BOOL success, NSArray * products);

@interface AppPurchaseHelper : NSObject <SKProductsRequestDelegate>

- (id)initWithProductIdentifiers:(NSSet *)productIdentifiers;
- (void)requestProductsWithCompletionHandler:(RequestProductsCompletionHandler)completionHandler;
- (void)buyProduct:(SKProduct *)product;
- (BOOL)productPurchased:(NSString *)productIdentifier;
- (void)restoreCompletedTransactions;

@end
