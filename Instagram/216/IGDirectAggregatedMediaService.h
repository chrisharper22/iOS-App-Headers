//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMediaStore;
@protocol IGAPIClient;

@interface IGDirectAggregatedMediaService : NSObject
{
    id <IGAPIClient> _networker;
    IGMediaStore *_mediaStore;
}

- (void).cxx_destruct;
- (void)fetchAggregatedMediaWithThreadId:(id)arg1 cursor:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)initWithNetworker:(id)arg1 mediaStore:(id)arg2;

@end

