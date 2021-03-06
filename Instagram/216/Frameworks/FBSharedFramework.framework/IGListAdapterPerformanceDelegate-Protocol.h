//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGListAdapter, IGListSectionController, UICollectionViewCell, UIScrollView;

@protocol IGListAdapterPerformanceDelegate <NSObject>
- (void)listAdapter:(IGListAdapter *)arg1 didCallScroll:(UIScrollView *)arg2;
- (void)listAdapterWillCallScroll:(IGListAdapter *)arg1;
- (void)listAdapter:(IGListAdapter *)arg1 didCallSizeOnSectionController:(IGListSectionController *)arg2 atIndex:(long long)arg3;
- (void)listAdapterWillCallSize:(IGListAdapter *)arg1;
- (void)listAdapter:(IGListAdapter *)arg1 didCallEndDisplayCell:(UICollectionViewCell *)arg2 onSectionController:(IGListSectionController *)arg3 atIndex:(long long)arg4;
- (void)listAdapterWillCallEndDisplayCell:(IGListAdapter *)arg1;
- (void)listAdapter:(IGListAdapter *)arg1 didCallDisplayCell:(UICollectionViewCell *)arg2 onSectionController:(IGListSectionController *)arg3 atIndex:(long long)arg4;
- (void)listAdapterWillCallDisplayCell:(IGListAdapter *)arg1;
- (void)listAdapter:(IGListAdapter *)arg1 didCallDequeueCell:(UICollectionViewCell *)arg2 onSectionController:(IGListSectionController *)arg3 atIndex:(long long)arg4;
- (void)listAdapterWillCallDequeueCell:(IGListAdapter *)arg1;
@end

