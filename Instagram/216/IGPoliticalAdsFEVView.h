//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class IGCoreTextView, UIImageView, UILabel, UIView;

@interface IGPoliticalAdsFEVView : UIScrollView
{
    UILabel *_bylineView;
    UILabel *_fundingEntityTextView;
    UILabel *_phoneTextView;
    UILabel *_emailTextView;
    UILabel *_websiteTextView;
    UILabel *_taxIdTextView;
    UILabel *_disclaimerView;
    UIView *_lineSeparatorTop;
    UILabel *_scmeTextView;
    UIView *_lineSeparatorBottom;
    UILabel *_aboutHeaderView;
    UILabel *_aboutDescriptionView;
    UIImageView *_phoneIcon;
    UIImageView *_emailIcon;
    UIImageView *_websiteIcon;
    UIImageView *_taxIdIcon;
    _Bool _isAdsPreferencePoliticalSheet;
    IGCoreTextView *_learnMoreView;
    IGCoreTextView *_scmeDescriptionWithLearnMoreView;
    IGCoreTextView *_visitArchiveView;
    IGCoreTextView *_helpCenterView;
    UILabel *_libraryLinkView;
    UIView *_emailView;
    UIView *_phoneView;
    UIView *_websiteView;
    UIView *_taxIdView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *taxIdView; // @synthesize taxIdView=_taxIdView;
@property(readonly, nonatomic) UIView *websiteView; // @synthesize websiteView=_websiteView;
@property(readonly, nonatomic) UIView *phoneView; // @synthesize phoneView=_phoneView;
@property(readonly, nonatomic) UIView *emailView; // @synthesize emailView=_emailView;
@property(readonly, nonatomic) UILabel *libraryLinkView; // @synthesize libraryLinkView=_libraryLinkView;
@property(readonly, nonatomic) IGCoreTextView *helpCenterView; // @synthesize helpCenterView=_helpCenterView;
@property(readonly, nonatomic) IGCoreTextView *visitArchiveView; // @synthesize visitArchiveView=_visitArchiveView;
@property(readonly, nonatomic) IGCoreTextView *scmeDescriptionWithLearnMoreView; // @synthesize scmeDescriptionWithLearnMoreView=_scmeDescriptionWithLearnMoreView;
@property(readonly, nonatomic) IGCoreTextView *learnMoreView; // @synthesize learnMoreView=_learnMoreView;
- (void)_configureFrameForView:(id)arg1 withIcon:(id)arg2 text:(id)arg3 originY:(double)arg4;
- (double)_getContentWidth;
- (void)layoutSubviews;
- (void)configWithPoliticalAdsResponse:(id)arg1 isAdsPreferencePoliticalSheet:(_Bool)arg2 scmeText:(id)arg3 scmeDescriptionText:(id)arg4;
- (id)init;

@end

