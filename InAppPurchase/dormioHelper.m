//
//  dormioHelper.m
//  In App Purchase
//
//  Created by Milad Rezazadeh on 5/26/13.
//  Copyright (c) 2013 mindvalley. All rights reserved.
//

#import "dormioHelper.h"

@implementation dormioHelper


+ (dormioHelper *)sharedInstance {
    static dispatch_once_t once;
    static dormioHelper * sharedInstance;
    dispatch_once(&once, ^{
        // SET LIST OF PRODUCT IDENTIFIERS
        NSSet * productIdentifiers = [NSSet setWithObjects:@"com.mindvalley.vana.3x3deeprelaxation"
                                      ,@"com.mindvalley.vana.3x3healthybody",nil];
        sharedInstance = [[self alloc] initWithProductIdentifiers:productIdentifiers];
    });
    return sharedInstance;
}

@end
