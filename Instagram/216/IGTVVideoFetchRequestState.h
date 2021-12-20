//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class AVAsset, NSError;

@interface IGTVVideoFetchRequestState : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    double _loading_progress;
    AVAsset *_fetched_asset;
    NSError *_failed_error;
}

+ (id)loadingWithProgress:(double)arg1;
+ (id)idle;
+ (id)fetchedWithAsset:(id)arg1;
+ (id)failedWithError:(id)arg1;
- (void).cxx_destruct;
- (void)matchIdle:(CDUnknownBlockType)arg1 loading:(CDUnknownBlockType)arg2 fetched:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanIdle:(CDUnknownBlockType)arg1 loading:(CDUnknownBlockType)arg2 fetched:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;

@end

