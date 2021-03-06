//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGDirectResponseInfo, IGFeedItemPageCellState, IGFeedItemTracker, IGMedia, IGSponsoredSupportConfiguration, NSString, UIPanGestureRecognizer;
@protocol IGFeedItemDirectResponseLoggingProviderDelegate, IGLeadGenViewControllerDelegate;

@interface IGLeadGenAdsUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _hideHeaderImageView;
    _Bool _hideFixedHeaderView;
    _Bool _hideStatusBar;
    _Bool _hideNavigationBar;
    _Bool _isForStoryAds;
    IGMedia *_media;
    IGFeedItemTracker *_feedItemTracker;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    double _viewWidth;
    IGDirectResponseInfo *_directResponseInfo;
    IGFeedItemPageCellState *_pageCellState;
    long long _mediaPosition;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
    NSString *_module;
    unsigned long long _context;
    id <IGLeadGenViewControllerDelegate> _delegate;
    UIPanGestureRecognizer *_presentingPanGesture;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIPanGestureRecognizer *presentingPanGesture; // @synthesize presentingPanGesture=_presentingPanGesture;
@property(readonly, nonatomic) id <IGLeadGenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isForStoryAds; // @synthesize isForStoryAds=_isForStoryAds;
@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) _Bool hideNavigationBar; // @synthesize hideNavigationBar=_hideNavigationBar;
@property(readonly, nonatomic) _Bool hideStatusBar; // @synthesize hideStatusBar=_hideStatusBar;
@property(readonly, nonatomic) _Bool hideFixedHeaderView; // @synthesize hideFixedHeaderView=_hideFixedHeaderView;
@property(readonly, nonatomic) _Bool hideHeaderImageView; // @synthesize hideHeaderImageView=_hideHeaderImageView;
@property(readonly, nonatomic) id <IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(readonly, nonatomic) long long mediaPosition; // @synthesize mediaPosition=_mediaPosition;
@property(readonly, nonatomic) IGFeedItemPageCellState *pageCellState; // @synthesize pageCellState=_pageCellState;
@property(readonly, nonatomic) IGDirectResponseInfo *directResponseInfo; // @synthesize directResponseInfo=_directResponseInfo;
@property(readonly, nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration; // @synthesize sponsoredSupportConfiguration=_sponsoredSupportConfiguration;
@property(readonly, nonatomic) IGFeedItemTracker *feedItemTracker; // @synthesize feedItemTracker=_feedItemTracker;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
- (id)initWithMedia:(id)arg1 feedItemTracker:(id)arg2 sponsoredSupportConfiguration:(id)arg3 viewWidth:(double)arg4 directResponseInfo:(id)arg5 pageCellState:(id)arg6 mediaPosition:(long long)arg7 loggingDelegate:(id)arg8 hideHeaderImageView:(_Bool)arg9 hideFixedHeaderView:(_Bool)arg10 hideStatusBar:(_Bool)arg11 hideNavigationBar:(_Bool)arg12 module:(id)arg13 context:(unsigned long long)arg14 isForStoryAds:(_Bool)arg15 delegate:(id)arg16 presentingPanGesture:(id)arg17;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

