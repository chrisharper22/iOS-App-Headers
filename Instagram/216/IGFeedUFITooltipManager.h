//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItemUFICell, IGUserSession, NSMutableArray, UICollectionView;

@interface IGFeedUFITooltipManager : NSObject
{
    UICollectionView *_collectionView;
    IGUserSession *_userSession;
    IGFeedItemUFICell *_latestVisibleUFICell;
    NSMutableArray *_tooltips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tooltips; // @synthesize tooltips=_tooltips;
@property(nonatomic) __weak IGFeedItemUFICell *latestVisibleUFICell; // @synthesize latestVisibleUFICell=_latestVisibleUFICell;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (_Bool)_canShowAnyTooltip;
- (id)_nextElligibleTooltip;
- (void)_showNextElligibleTooltip;
- (void)addTooltipProvider:(id)arg1;
- (void)updateActionCell:(id)arg1 visible:(_Bool)arg2;
- (void)hideTooltipAnimated:(_Bool)arg1 dismissedByUser:(_Bool)arg2;
- (void)tryShowingNextTooltip;
- (id)initWithCollectionView:(id)arg1 userSession:(id)arg2;

@end
