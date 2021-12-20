//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGViewAppearAnnouncer, IGViewDisappearAnnouncer, IGViewLayoutAnnouncer, IGViewLoadAnnouncer;

@interface IGViewControllerAnnouncer : NSObject
{
    id <IGViewLoadAnnouncer> _loadAnnouncer;
    id <IGViewAppearAnnouncer> _appearAnnouncer;
    id <IGViewDisappearAnnouncer> _disappearAnnouncer;
    id <IGViewLayoutAnnouncer> _layoutAnnouncer;
}

- (void).cxx_destruct;
- (void)viewControllerViewDidLayoutSubviews:(id)arg1;
- (void)viewControllerViewWillLayoutSubviews:(id)arg1;
- (void)removeLayoutListener:(id)arg1;
- (void)addLayoutListener:(id)arg1;
- (void)viewController:(id)arg1 viewDidDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappearAnimated:(_Bool)arg2;
- (void)removeDisappearListener:(id)arg1;
- (void)addDisappearListener:(id)arg1;
- (void)viewController:(id)arg1 viewDidAppearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillAppearAnimated:(_Bool)arg2;
- (void)removeAppearListener:(id)arg1;
- (void)addAppearListener:(id)arg1;
- (void)viewControllerViewDidLoad:(id)arg1;
- (void)removeLoadListener:(id)arg1;
- (void)addLoadListener:(id)arg1;
- (id)init;

@end
