//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGSearchContainingViewDelegate-Protocol.h>

@class IGSearchContainingView, NSString, UIViewController;
@protocol IGAnalyticsModule><IGGestureHandler, IGSearchControlling;

@interface IGSearchContainingViewController : IGViewController <IGSearchContainingViewDelegate, IGGestureHandler>
{
    UIViewController<IGAnalyticsModule><IGGestureHandler> *_resultsViewController;
    id <IGSearchControlling> _searchController;
    IGSearchContainingView *_containingView;
}

- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarDividerHidden;
- (_Bool)prefersNavigationBarHidden;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)searchViewDidSearch:(id)arg1 withText:(id)arg2;
- (struct CGSize)viewSizeThatFitsSize:(struct CGSize)arg1;
- (void)clearSearchText;
@property(readonly, nonatomic) NSString *searchText;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (id)initWithSearchBarConfig:(id)arg1 resultsViewController:(id)arg2 searchController:(id)arg3 headerView:(id)arg4 headerHeight:(double)arg5 initialQuery:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

