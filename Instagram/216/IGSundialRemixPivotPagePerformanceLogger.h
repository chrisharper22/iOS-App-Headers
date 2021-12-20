//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSundialGridPerformanceLogger-Protocol.h"

@class NSString;

@interface IGSundialRemixPivotPagePerformanceLogger : NSObject <IGSundialGridPerformanceLogger>
{
    NSString *_mediaId;
}

- (void).cxx_destruct;
- (void)logGridItemRenderFailed:(id)arg1 error:(id)arg2;
- (void)logGridItemRendered:(id)arg1 source:(unsigned long long)arg2;
- (void)logGridFeedRenderEnd;
- (void)logFetchFailure:(long long)arg1 errorMessage:(id)arg2;
- (void)wasPrefetchedWithItemCount:(long long)arg1 firstItem:(id)arg2;
- (void)logFetchCompleteWithItemCount:(long long)arg1 firstItem:(id)arg2;
- (void)logFetchStart;
- (id)initWithMediaId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
