//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGFeedToggleViewDelegate-Protocol.h"

@class IGFeedToggleView, NSString;
@protocol IGFeedToggleCollectionViewCellDelegate;

@interface IGFeedToggleCollectionViewCell : UICollectionViewCell <IGFeedToggleViewDelegate>
{
    _Bool _isSelfProfile;
    id <IGFeedToggleCollectionViewCellDelegate> _delegate;
    IGFeedToggleView *_cellView;
    long long _buttonOptions;
}

+ (double)preferredCellHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSelfProfile; // @synthesize isSelfProfile=_isSelfProfile;
@property(nonatomic) long long buttonOptions; // @synthesize buttonOptions=_buttonOptions;
@property(retain, nonatomic) IGFeedToggleView *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) __weak id <IGFeedToggleCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedToggle:(id)arg1 selectedButton:(long long)arg2;
- (void)setDefaultFeedMode:(long long)arg1;
- (struct CGRect)savedButtonFrameRelativeToView:(id)arg1;
- (void)setUsertagEnabled:(_Bool)arg1;
- (void)setToggleEnabled:(_Bool)arg1;
- (void)setUserTagsBadged:(_Bool)arg1;
- (void)setButtonOptions:(long long)arg1 isSelfProfile:(_Bool)arg2 isBusinessProfile:(_Bool)arg3 metrics:(id)arg4 userSession:(id)arg5;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

