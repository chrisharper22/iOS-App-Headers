//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FBSharedFramework/IGConfigurablePlaceHolderView-Protocol.h>

@class IGPlaceHolderCellLayoutSpec, NSString, UIView;

@interface IGPlaceHolderCell : UICollectionViewCell <IGConfigurablePlaceHolderView>
{
    UIView *_containerView;
    UIView *_thumbnailPlaceholder;
    UIView *_profileTitlePlaceholder;
    UIView *_profileSubtitlePlaceholder;
    UIView *_actionButtonPlaceholder;
    IGPlaceHolderCellLayoutSpec *_layoutSpec;
}

- (void).cxx_destruct;
- (void)configureWithLayoutSpec:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

