//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFeedPreviewableSectionController-Protocol.h"
#import "IGMediaHiddenListener-Protocol.h"
#import "IGMediaUnhiddenListener-Protocol.h"
#import "IGMediaUpdatedListener-Protocol.h"

@class IGGridLayoutSpec, IGMedia, IGUserSession, NSMutableArray, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGSundialGridPerformanceLogger, IGSundialGridVideoSectionControllerDelegate;

@interface IGSundialGridVideoSectionController : IGListSectionController <IGMediaUpdatedListener, IGMediaHiddenListener, IGMediaUnhiddenListener, IGFeedPreviewableSectionController>
{
    IGMedia *_video;
    IGUserSession *_userSession;
    _Bool _animatedThumbnailEnabled;
    id <IGSundialGridVideoSectionControllerDelegate> _delegate;
    NSString *_pillText;
    NSString *_blackOverlayText;
    NSString *_analyticsModule;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGSundialGridPerformanceLogger> _perfLogger;
    NSString *_sessionId;
    IGGridLayoutSpec *_gridLayoutSpec;
    NSString *_startingMediaId;
    NSMutableArray *_mediaList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animatedThumbnailEnabled; // @synthesize animatedThumbnailEnabled=_animatedThumbnailEnabled;
@property(copy, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
@property(copy, nonatomic) NSString *startingMediaId; // @synthesize startingMediaId=_startingMediaId;
@property(copy, nonatomic) IGGridLayoutSpec *gridLayoutSpec; // @synthesize gridLayoutSpec=_gridLayoutSpec;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <IGSundialGridPerformanceLogger> perfLogger; // @synthesize perfLogger=_perfLogger;
@property(nonatomic) __weak id <IGAnalyticsEventLoggingProtocol> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(copy, nonatomic) NSString *blackOverlayText; // @synthesize blackOverlayText=_blackOverlayText;
@property(copy, nonatomic) NSString *pillText; // @synthesize pillText=_pillText;
@property(nonatomic) __weak id <IGSundialGridVideoSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentSundialViewer;
- (void)presentFeedPreviewableItem;
- (void)mediaUnhiddenFeedItem:(id)arg1;
- (void)mediaHiddenFeedItem:(id)arg1 sourceModule:(id)arg2 storyReelPK:(id)arg3 reason:(long long)arg4;
- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (CDStruct_a508bfa1)_gridItemPosition;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

