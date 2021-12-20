//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGImageViewDelegate-Protocol.h>

@class IGDirectAvatarView, IGImageTitleSubtitleViewLayoutSpec, IGImageTitleSubtitleViewModel, IGImageView, NSString, UIImageView, UILabel;

@interface IGImageTitleSubtitleView : UIView <IGImageViewDelegate>
{
    IGDirectAvatarView *_avatarImageView;
    IGImageView *_imageView;
    UIView *_customLeftView;
    UIImageView *_verifiedBadgeView;
    IGImageTitleSubtitleViewModel *_viewModel;
    UIView *_accessoryView;
    UIView *_innerAccessoryView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_subtitleAccessoryView;
    IGImageTitleSubtitleViewLayoutSpec *_layoutSpec;
    unsigned long long _customAccessibilityTraits;
    double _accessoryViewWidth;
}

+ (struct CGSize)preferredSizeForConstrainingSize:(struct CGSize)arg1 viewModel:(id)arg2 accessoryViewWidth:(double)arg3 subtitleAccessoryViewWidth:(double)arg4;
- (void).cxx_destruct;
@property(nonatomic) double accessoryViewWidth; // @synthesize accessoryViewWidth=_accessoryViewWidth;
@property(nonatomic) unsigned long long customAccessibilityTraits; // @synthesize customAccessibilityTraits=_customAccessibilityTraits;
@property(readonly, nonatomic) IGImageTitleSubtitleViewLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(retain, nonatomic) UIView *subtitleAccessoryView; // @synthesize subtitleAccessoryView=_subtitleAccessoryView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *innerAccessoryView; // @synthesize innerAccessoryView=_innerAccessoryView;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)configureWithViewModel:(id)arg1;
- (id)customImageView;
- (id)avatarImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

