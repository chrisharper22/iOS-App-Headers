//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

@class IGNavigationBar, IGVisualSearchInteractiveViewController;
@protocol IGPartialModalSheetListener;

@interface IGVisualSearchContainerViewController : IGViewController
{
    IGVisualSearchInteractiveViewController *_interactiveViewController;
    IGNavigationBar *_navigationBar;
    id <IGPartialModalSheetListener> _partialModalSheetListener;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPartialModalSheetListener> partialModalSheetListener; // @synthesize partialModalSheetListener=_partialModalSheetListener;
- (void)visualSearchInteractiveViewControllerDidDismiss:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFeedView:(id)arg1 photo:(id)arg2 interactingFocusRegion:(struct CGRect)arg3 userSession:(id)arg4 visualSearchInput:(id)arg5 entryPoint:(id)arg6 navigationBar:(id)arg7;

@end
