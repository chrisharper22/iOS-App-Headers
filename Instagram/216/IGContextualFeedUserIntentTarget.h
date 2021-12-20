//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IG4BLogger, IGCTAPresenterContext, IGFeedFocusCoordinator, IGFeedItemLogger, IGFeedItemShoppingConfiguration, IGSavedMediaCollection, NSString;
@protocol IGContextualFeedLogger, IGContextualFeedService, IGContextualFeedViewControllerDelegate, IGFeedStatusViewDataSource;

@interface IGContextualFeedUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _showPullToRefresh;
    _Bool _showExploreContext;
    _Bool _showPreviewComments;
    _Bool _enableUnifiedPostChain;
    _Bool _supportIGTVAds;
    id <IGContextualFeedService> _contextualFeedService;
    id <IGContextualFeedLogger> _contextualFeedLogger;
    IGFeedItemLogger *_feedItemLogger;
    IG4BLogger *_proLogger;
    id <IGFeedStatusViewDataSource> _feedStatusViewDataSource;
    NSString *_title;
    NSString *_subtitle;
    NSString *_entityId;
    NSString *_productId;
    IGFeedFocusCoordinator *_focusCoordinator;
    long long _entryPoint;
    IGSavedMediaCollection *_savedMediaCollection;
    id <IGContextualFeedViewControllerDelegate> _delegate;
    CDUnknownBlockType _emptyStateButtonTapBlock;
    IGCTAPresenterContext *_ctaPresenterContext;
    IGFeedItemShoppingConfiguration *_shoppingConfiguration;
    NSString *_priorModule;
    NSString *_priorSubmodule;
    NSString *_shopsFirstEntryPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *shopsFirstEntryPoint; // @synthesize shopsFirstEntryPoint=_shopsFirstEntryPoint;
@property(readonly, nonatomic) NSString *priorSubmodule; // @synthesize priorSubmodule=_priorSubmodule;
@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) _Bool supportIGTVAds; // @synthesize supportIGTVAds=_supportIGTVAds;
@property(readonly, nonatomic) IGFeedItemShoppingConfiguration *shoppingConfiguration; // @synthesize shoppingConfiguration=_shoppingConfiguration;
@property(readonly, nonatomic) IGCTAPresenterContext *ctaPresenterContext; // @synthesize ctaPresenterContext=_ctaPresenterContext;
@property(readonly, nonatomic) CDUnknownBlockType emptyStateButtonTapBlock; // @synthesize emptyStateButtonTapBlock=_emptyStateButtonTapBlock;
@property(readonly, nonatomic) id <IGContextualFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGSavedMediaCollection *savedMediaCollection; // @synthesize savedMediaCollection=_savedMediaCollection;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) _Bool enableUnifiedPostChain; // @synthesize enableUnifiedPostChain=_enableUnifiedPostChain;
@property(readonly, nonatomic) _Bool showPreviewComments; // @synthesize showPreviewComments=_showPreviewComments;
@property(readonly, nonatomic) _Bool showExploreContext; // @synthesize showExploreContext=_showExploreContext;
@property(readonly, nonatomic) IGFeedFocusCoordinator *focusCoordinator; // @synthesize focusCoordinator=_focusCoordinator;
@property(readonly, nonatomic) _Bool showPullToRefresh; // @synthesize showPullToRefresh=_showPullToRefresh;
@property(readonly, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id <IGFeedStatusViewDataSource> feedStatusViewDataSource; // @synthesize feedStatusViewDataSource=_feedStatusViewDataSource;
@property(readonly, nonatomic) IG4BLogger *proLogger; // @synthesize proLogger=_proLogger;
@property(readonly, nonatomic) IGFeedItemLogger *feedItemLogger; // @synthesize feedItemLogger=_feedItemLogger;
@property(readonly, nonatomic) id <IGContextualFeedLogger> contextualFeedLogger; // @synthesize contextualFeedLogger=_contextualFeedLogger;
@property(readonly, nonatomic) id <IGContextualFeedService> contextualFeedService; // @synthesize contextualFeedService=_contextualFeedService;
- (id)initWithContextualFeedService:(id)arg1 contextualFeedLogger:(id)arg2 feedItemLogger:(id)arg3 proLogger:(id)arg4 feedStatusViewDataSource:(id)arg5 title:(id)arg6 subtitle:(id)arg7 entityId:(id)arg8 productId:(id)arg9 showPullToRefresh:(_Bool)arg10 focusCoordinator:(id)arg11 showExploreContext:(_Bool)arg12 showPreviewComments:(_Bool)arg13 enableUnifiedPostChain:(_Bool)arg14 entryPoint:(long long)arg15 savedMediaCollection:(id)arg16 delegate:(id)arg17 emptyStateButtonTapBlock:(CDUnknownBlockType)arg18 ctaPresenterContext:(id)arg19 shoppingConfiguration:(id)arg20 supportIGTVAds:(_Bool)arg21 priorModule:(id)arg22 priorSubmodule:(id)arg23 shopsFirstEntryPoint:(id)arg24;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
