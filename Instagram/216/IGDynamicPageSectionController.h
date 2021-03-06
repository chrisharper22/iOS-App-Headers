//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"

@class NSString, UIView, UIViewController;
@protocol IGDynamicPageChildViewControllerType, IGDynamicPageRepresentationProvider, IGDynamicPageScrollContext, IGDynamicPageSectionControllerDelegate, IGListDiffable;

@interface IGDynamicPageSectionController : IGListSectionController <IGFeedScrollViewListener, IGListDisplayDelegate>
{
    _Bool _selected;
    id <IGListDiffable> _pageIdentifier;
    UIViewController<IGDynamicPageChildViewControllerType> *_pageViewController;
    UIView *_placeholderView;
    long long _representationStyle;
    id <IGDynamicPageSectionControllerDelegate> _sectionDelegate;
    id <IGDynamicPageRepresentationProvider> _representationProvider;
    id <IGDynamicPageScrollContext> _scrollContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDynamicPageScrollContext> scrollContext; // @synthesize scrollContext=_scrollContext;
@property(nonatomic) __weak id <IGDynamicPageRepresentationProvider> representationProvider; // @synthesize representationProvider=_representationProvider;
@property(nonatomic) __weak id <IGDynamicPageSectionControllerDelegate> sectionDelegate; // @synthesize sectionDelegate=_sectionDelegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) long long representationStyle; // @synthesize representationStyle=_representationStyle;
@property(readonly, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(readonly, nonatomic) UIViewController<IGDynamicPageChildViewControllerType> *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(readonly, nonatomic) id <IGListDiffable> pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (id)displayDelegate;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (long long)_preferredRepresentationStyleOnDisplayStart;
- (void)_teardownPageViewControllerIfNeeded;
- (void)_setupPageViewControllerIfNeeded;
- (void)_updateRepresentationToStyle:(long long)arg1 withVisibleCell:(id)arg2;
- (id)initWithScrollViewAnnouncer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

