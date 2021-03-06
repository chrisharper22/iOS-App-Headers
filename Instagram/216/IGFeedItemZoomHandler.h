//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGZoomHandlerDelegate-Protocol.h"

@class IGSponsoredSupportConfiguration, NSString, UIView, UIViewController;
@protocol IGAnalyticsModule, IGFeedItemConfigurationType, IGFeedItemZoomHandlerDelegate;

@interface IGFeedItemZoomHandler : NSObject <IGZoomHandlerDelegate>
{
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    id <IGFeedItemZoomHandlerDelegate> _delegate;
    UIViewController<IGAnalyticsModule> *_presentingController;
    id <IGFeedItemConfigurationType> _feedItemConfiguration;
    double _headerHeight;
    NSString *_analyticsModule;
    UIView *_zoomedViewParentView;
    long long _zoomedViewParentPosition;
}

- (void).cxx_destruct;
@property(nonatomic) long long zoomedViewParentPosition; // @synthesize zoomedViewParentPosition=_zoomedViewParentPosition;
@property(retain, nonatomic) UIView *zoomedViewParentView; // @synthesize zoomedViewParentView=_zoomedViewParentView;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) __weak id <IGFeedItemConfigurationType> feedItemConfiguration; // @synthesize feedItemConfiguration=_feedItemConfiguration;
@property(nonatomic) __weak UIViewController<IGAnalyticsModule> *presentingController; // @synthesize presentingController=_presentingController;
@property(nonatomic) __weak id <IGFeedItemZoomHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (void)didStartZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (void)willStartZoomWithZoomController:(id)arg1 zoomPresenter:(id)arg2;
- (id)zoomViewControllerForZoomController:(id)arg1 frame:(struct CGRect)arg2;
- (double)headerHeightForZoomController:(id)arg1;
- (_Bool)shouldLaunchZoomingWithZoomController:(id)arg1 gestureRecognizer:(id)arg2;
- (unsigned long long)itemTypeForMediaType:(long long)arg1 media:(id)arg2;
- (id)feedItemForCell:(id)arg1;
- (id)initWithDelegate:(id)arg1 presentingController:(id)arg2 feedItemConfiguration:(id)arg3 sponsoredSupportConfiguration:(id)arg4 headerHeight:(double)arg5 analyticsModule:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

