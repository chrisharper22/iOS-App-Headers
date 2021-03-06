//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGMainFeedReloadManagerDelegate;

@interface IGMainFeedRenderManager : NSObject
{
    id <IGMainFeedReloadManagerDelegate> _delegate;
    _Bool _shouldSkipFirstStoriesRender;
    _Bool _hasSkippedFirstStoriesRender;
    CDUnknownBlockType _pendingStoriesRenderBlock;
}

- (void).cxx_destruct;
- (void)feedNeedsRenderingForType:(long long)arg1 animated:(_Bool)arg2 finishRefreshing:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithDelegate:(id)arg1 shouldSkipFirstStoriesRender:(_Bool)arg2;

@end

