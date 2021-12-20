//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGPageViewControllerDataSource-Protocol.h"
#import "IGPageViewControllerDelegate-Protocol.h"
#import "IGStoryViewerBottomSheetNavigationBarDatasource-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGPageViewController, IGStoryViewerBottomSheetNavigationBar, IGUserSession, NSArray, NSMutableSet, NSString;
@protocol IGCameraEffectBottomSheetViewControllerDelegate;

@interface IGCameraEffectCollectionBottomSheetViewController : IGViewController <IGPageViewControllerDataSource, IGPageViewControllerDelegate, IGStoryViewerBottomSheetNavigationBarDatasource, UIGestureRecognizerDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    long long _entryPoint;
    NSMutableSet *_configurations;
    IGStoryViewerBottomSheetNavigationBar *_navigationBar;
    IGPageViewController *_pageViewController;
    NSArray *_cameraEffectBottomSheetViewControllers;
    _Bool _inPartialNavigationController;
    NSString *_originalAuthorId;
    id <IGCameraEffectBottomSheetViewControllerDelegate> _cameraEffectBottomSheetViewControllerDelegate;
    double _selectedPageIndex;
}

+ (double)bottomSheetHeightForConfigurations:(id)arg1 userSession:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double selectedPageIndex; // @synthesize selectedPageIndex=_selectedPageIndex;
@property(nonatomic) __weak id <IGCameraEffectBottomSheetViewControllerDelegate> cameraEffectBottomSheetViewControllerDelegate; // @synthesize cameraEffectBottomSheetViewControllerDelegate=_cameraEffectBottomSheetViewControllerDelegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pageViewControllerDidScroll:(id)arg1;
- (void)pageViewController:(id)arg1 didChangeCurrentViewControllerToController:(id)arg2 atIndex:(long long)arg3;
- (id)pageViewController:(id)arg1 controllerForIndex:(long long)arg2;
- (long long)numberOfPagesForPageViewController:(id)arg1;
- (double)storyViewerBottomSheetNavigationBar:(id)arg1 configureHeightForItemAtIndex:(long long)arg2;
- (void)storyViewerBottomSheetNavigationBar:(id)arg1 configureCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)storyViewerBottomSheetNavigationBarNumberOfItems:(id)arg1;
- (void)_didTapForwardButton:(id)arg1;
- (void)_didTapBackButton:(id)arg1;
- (_Bool)configure:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (_Bool)prefersNavigationBarDividerHidden;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 inPartialNavigationController:(_Bool)arg2 entryPoint:(long long)arg3 originalAuthorId:(id)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

