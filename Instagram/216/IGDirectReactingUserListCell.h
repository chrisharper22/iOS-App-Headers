//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FBPerlinNoise, IGImageTitleSubtitleView, UILabel;

@interface IGDirectReactingUserListCell : UICollectionViewCell
{
    IGImageTitleSubtitleView *_coreView;
    UILabel *_emojiLabel;
    struct CGSize _emojiSize;
    struct UIEdgeInsets _emojiPadding;
    UILabel *_superReactEmojiLabel1;
    UILabel *_superReactEmojiLabel2;
    UILabel *_superReactEmojiLabel3;
    UILabel *_superReactEmojiLabel4;
    UILabel *_superReactEmojiLabel5;
    UILabel *_superReactEmojiLabel6;
    UILabel *_superReactEmojiLabel7;
    UILabel *_superReactEmojiLabel8;
    FBPerlinNoise *_perlinNoise;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_cleanUpSuperReactEmojiLabels;
- (id)_createAndAddSuperReactEmojiLabel;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

