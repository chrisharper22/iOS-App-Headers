//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGCachePolicy-Protocol.h>

@class IGCacheMetadata, NSString;

@interface IGIgnoreCachePolicy : NSObject <IGCachePolicy>
{
    IGCacheMetadata *_metadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCacheMetadata *metadata; // @synthesize metadata=_metadata;
- (_Bool)shouldCacheData:(id)arg1 fromResponse:(id)arg2;
- (void)requestCompletedEarlierByLoadingCacheData;
- (void)requestCompletedSuccessfullyWithData:(id)arg1 response:(id)arg2 didWriteResponseToCache:(_Bool)arg3;
- (void)requestFinishedWithError:(id)arg1;
- (unsigned long long)requestStartedWithCacheUnlockHandler:(CDUnknownBlockType)arg1;
- (id)initWithUserPk:(id)arg1 key:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

