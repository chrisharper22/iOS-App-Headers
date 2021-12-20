//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSError;

@interface IGShoppingProductGroupNetworkerFetchState : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSError *_failed_error;
}

+ (id)loading;
+ (id)loaded;
+ (id)idle;
+ (id)failedWithError:(id)arg1;
- (void).cxx_destruct;
- (long long)matchIntegerIdle:(CDUnknownBlockType)arg1 loading:(CDUnknownBlockType)arg2 loaded:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)matchIdle:(CDUnknownBlockType)arg1 loading:(CDUnknownBlockType)arg2 loaded:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanIdle:(CDUnknownBlockType)arg1 loading:(CDUnknownBlockType)arg2 loaded:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;

@end
