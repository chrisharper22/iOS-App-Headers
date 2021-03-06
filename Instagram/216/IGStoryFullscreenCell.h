//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGStoryContentView-Protocol.h"
#import "IGStoryDimmableView-Protocol.h"
#import "IGStoryProfileImageContaining-Protocol.h"
#import "IGStoryViewerContainerViewContaining-Protocol.h"

@class BKContext, IGStoryViewerContainerView, IGStoryViewerTransitionOverlay, IGUserSession, NSString;

@interface IGStoryFullscreenCell : UICollectionViewCell <IGStoryContentView, IGStoryDimmableView, IGStoryProfileImageContaining, IGStoryViewerContainerViewContaining>
{
    _Bool _shouldCreateComposerBackgroundView;
    IGStoryViewerContainerView *_containerView;
    IGStoryViewerTransitionOverlay *_dimmableView;
    IGUserSession *_userSession;
    BKContext *_bloksContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BKContext *bloksContext; // @synthesize bloksContext=_bloksContext;
@property(nonatomic) _Bool shouldCreateComposerBackgroundView; // @synthesize shouldCreateComposerBackgroundView=_shouldCreateComposerBackgroundView;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGStoryViewerTransitionOverlay *dimmableView; // @synthesize dimmableView=_dimmableView;
- (id)contentViewForSnapshot;
- (id)profileImageView;
- (void)setDimmingPercent:(double)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGStoryViewerContainerView *containerView; // @synthesize containerView=_containerView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

