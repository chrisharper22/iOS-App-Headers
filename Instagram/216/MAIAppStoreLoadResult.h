//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class MAISKStoreProductViewController, NSError;

@interface MAIAppStoreLoadResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    MAISKStoreProductViewController *_success_storeProductViewController;
    NSError *_failure_error;
    MAISKStoreProductViewController *_failure_storeProductViewController;
}

+ (id)successWithStoreProductViewController:(id)arg1;
+ (id)failureWithError:(id)arg1 storeProductViewController:(id)arg2;
- (void).cxx_destruct;
- (void)matchSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end

