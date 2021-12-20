//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGSimpleButton, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer;
@protocol IGSundialVideoEditorThumbnailCellDelegate;

@interface IGSundialVideoEditorThumbnailCell : UICollectionViewCell
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UILabel *_durationLabel;
    IGSimpleButton *_deleteButton;
    _Bool _deleteIconEnabled;
    double _duration;
    id <IGSundialVideoEditorThumbnailCellDelegate> _delegate;
    UIImageView *_thumbnailImageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic) __weak id <IGSundialVideoEditorThumbnailCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)stopWiggle;
- (void)wiggle;
@property(readonly, nonatomic) UIButton *deleteButton;
@property(nonatomic) _Bool deleteIconEnabled;
- (void)handleLongPress:(id)arg1;
@property(nonatomic) _Bool longPressEnabled;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

