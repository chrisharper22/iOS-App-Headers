//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectScrollingTabChildViewControllerProtocol-Protocol.h"
#import "IGInfoViewDelegate-Protocol.h"
#import "IGSavedMediaCollectionsDataSourceDelegate-Protocol.h"

@class IGDirectShareRecipient, IGEmptyFeedView, IGInfoView, IGSavedMediaCollectionsDataSource, IGSavedMediaFeedViewController, IGUserSession, NSString, UIActivityIndicatorView;
@protocol IGReshareHubDelegate;

@interface IGSavedContainerViewController : IGViewController <IGSavedMediaCollectionsDataSourceDelegate, IGInfoViewDelegate, IGDirectScrollingTabChildViewControllerProtocol>
{
    IGUserSession *_userSession;
    IGSavedMediaFeedViewController *_savedMediaFeedViewController;
    IGSavedMediaCollectionsDataSource *_dataSource;
    struct UIEdgeInsets _edgeInsets;
    id <IGReshareHubDelegate> _delegate;
    IGInfoView *_infoView;
    IGEmptyFeedView *_emptyView;
    IGDirectShareRecipient *_directShareRecipient;
    NSString *_analyticsModule;
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)infoViewWasTapped:(id)arg1;
- (void)_setupInfoViewIfNeeded;
- (void)_setupEmptyViewIfNeeded;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)collectionsDataSource:(id)arg1 updateFailedWithError:(id)arg2;
- (void)collectionsDataSourceDidUpdate:(id)arg1;
- (void)_setupSavedMediaFeedViewController:(id)arg1;
- (void)containerDidTapSend;
- (void)containerDidUpdateBottomInset:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 directShareRecipient:(id)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
