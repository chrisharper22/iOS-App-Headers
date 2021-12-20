//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGPreviewingAction-Protocol.h"

@class IGHashtagFeedNetworkSource, IGHashtagModel, IGHashtagPreviewView, IGUserSession, NSArray, NSString, UINavigationController;
@protocol IGPreviewPresentationDelegate;

@interface IGHashtagPreviewController : IGViewController <IGFeedNetworkSourceDelegate, IGPreviewingAction>
{
    double _previewWidth;
    UINavigationController *_navigationControllerForPushing;
    IGViewController *_viewControllerForAnimatedPresentation;
    id <IGPreviewPresentationDelegate> _previewPresentationDelegate;
    IGUserSession *_userSession;
    IGHashtagModel *_hashtag;
    IGHashtagFeedNetworkSource *_feedSource;
    NSArray *_previewItems;
    IGHashtagPreviewView *_hashtagView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGHashtagPreviewView *hashtagView; // @synthesize hashtagView=_hashtagView;
@property(retain, nonatomic) NSArray *previewItems; // @synthesize previewItems=_previewItems;
@property(retain, nonatomic) IGHashtagFeedNetworkSource *feedSource; // @synthesize feedSource=_feedSource;
@property(retain, nonatomic) IGHashtagModel *hashtag; // @synthesize hashtag=_hashtag;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGPreviewPresentationDelegate> previewPresentationDelegate; // @synthesize previewPresentationDelegate=_previewPresentationDelegate;
@property(nonatomic) __weak IGViewController *viewControllerForAnimatedPresentation; // @synthesize viewControllerForAnimatedPresentation=_viewControllerForAnimatedPresentation;
@property(nonatomic) __weak UINavigationController *navigationControllerForPushing; // @synthesize navigationControllerForPushing=_navigationControllerForPushing;
@property(nonatomic) double previewWidth; // @synthesize previewWidth=_previewWidth;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)_updateHashtagView;
- (id)previewActionBarItems;
- (id)previewActionItems;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 hashtag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

