//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class IGTransitionWrapperView;

@interface IGTransitionZoomPresentationController : UIPresentationController
{
    IGTransitionWrapperView *_presentedWrapperView;
    _Bool _isTransitioningSize;
}

- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)containerViewDidLayoutSubviews;
- (_Bool)shouldRemovePresentersView;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

