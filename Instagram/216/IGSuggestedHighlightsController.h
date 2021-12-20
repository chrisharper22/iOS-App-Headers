//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGGalleryFragmentController-Protocol.h"
#import "IGStoryTrayDataSourceChangeListener-Protocol.h"
#import "IGStoryTraySectionControllerLoggingDelegate-Protocol.h"
#import "IGStoryTraySectionControllerViewerDelegate-Protocol.h"

@class IGListSectionController, IGStoryTrayLoggingContext, IGStoryTraySectionController, IGSuggestedHighlightsDataSource, IGSuggestedHighlightsFragment, IGUserSession, NSString;
@protocol IGSuggestedHighlightsControllerDelegate;

@interface IGSuggestedHighlightsController : NSObject <IGStoryTrayDataSourceChangeListener, IGStoryTraySectionControllerViewerDelegate, IGStoryTraySectionControllerLoggingDelegate, IGGalleryFragmentController>
{
    NSString *_analyticsModule;
    IGSuggestedHighlightsFragment *_fragment;
    IGStoryTrayLoggingContext *_loggingContext;
    IGStoryTraySectionController *_sectionController;
    IGUserSession *_session;
    IGSuggestedHighlightsDataSource *_dataSource;
    id <IGSuggestedHighlightsControllerDelegate> _delegate;
}

+ (_Bool)canRenderFragment:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSuggestedHighlightsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)storyTraySectionController:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3;
- (void)storyTraySectionController:(id)arg1 willLogImpressionOfItem:(id)arg2 atIndex:(long long)arg3;
- (void)storyTraySectionControllerDidShowShimmer:(id)arg1;
- (void)storyTraySectionControllerScrollViewWillScrollNearRight:(id)arg1;
- (void)storyTraySectionController:(id)arg1 willShowViewerWithItem:(id)arg2;
- (void)storyTraySectionController:(id)arg1 didPublishHighlightNavigationAction:(long long)arg2;
- (void)storyTraySectionController:(id)arg1 didDismissViewerWithAddToStoryNUXModel:(id)arg2;
- (void)storyTrayDataSource:(id)arg1 didUpdateWithRefreshType:(long long)arg2 deliveryLoggingKey:(id)arg3;
- (void)storyTrayDataSource:(id)arg1 didUpdateReel:(id)arg2 positionChanged:(_Bool)arg3;
- (void)storyTrayDataSource:(id)arg1 updateFailedWithRefreshType:(long long)arg2 error:(id)arg3;
- (void)storyTrayDataSourceWillUpdate:(id)arg1;
- (void)_generateSectionControllerIfNecessary;
@property(readonly, nonatomic) IGListSectionController *sectionController;
- (id)initWithFragment:(id)arg1 session:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
