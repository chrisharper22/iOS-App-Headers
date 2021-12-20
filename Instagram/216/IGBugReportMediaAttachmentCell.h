//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGAttachmentPlayButton, UIButton, UIImageView, UIView;
@protocol IGBugReportMediaAttachmentCellDelegate;

@interface IGBugReportMediaAttachmentCell : UICollectionViewCell
{
    UIView *_imageShadowView;
    UIImageView *_imageView;
    UIView *_deleteShadowView;
    UIButton *_deleteButton;
    IGAttachmentPlayButton *_playButton;
    _Bool _redesignEnabled;
    id <IGBugReportMediaAttachmentCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBugReportMediaAttachmentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onTrashCanButton;
- (void)setImage:(id)arg1 isVideoType:(_Bool)arg2 redesignEnabled:(_Bool)arg3;
- (void)layoutSubviews;
- (void)_updateDarkModeBorder;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
