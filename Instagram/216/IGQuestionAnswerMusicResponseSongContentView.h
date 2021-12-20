//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGSundialMultiThumbnailView, NSString, NSURL, UIImageView, UILabel;

@interface IGQuestionAnswerMusicResponseSongContentView : UIView
{
    IGSundialMultiThumbnailView *_albumArtImageView;
    UILabel *_songTitleLabel;
    UILabel *_artistNameLabel;
    UIImageView *_explicitIcon;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isExplicit;
@property(copy, nonatomic) NSString *artistName;
@property(copy, nonatomic) NSString *songTitle;
@property(retain, nonatomic) NSURL *albumArtURL;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
