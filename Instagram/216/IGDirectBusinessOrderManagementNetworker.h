//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;

@interface IGDirectBusinessOrderManagementNetworker : NSObject
{
    IGUserSession *_userSession;
}

+ (id)newWithUserSession:(id)arg1;
- (void).cxx_destruct;
- (void)fetchOrderListWithCustomerId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendCreateOrderMutationWithCustomerId:(id)arg1 totalAmount:(id)arg2 notes:(id)arg3 threadId:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

