//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGPanavisionShareSheetMetadataList : UIView <IGListAdapterDataSource, UICollectionViewDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    NSArray *_metadataRows;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *metadataRows; // @synthesize metadataRows=_metadataRows;
- (id)analyticsModule;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)reloadObjects:(id)arg1;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

