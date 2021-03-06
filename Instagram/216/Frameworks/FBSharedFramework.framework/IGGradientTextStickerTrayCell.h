//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FBSharedFramework/IGStoryStickerTooltipPresentable-Protocol.h>

@class CAShapeLayer, IGTooltipView, NSArray, NSAttributedString, NSString, UILabel;
@protocol IGGradientTextStickerTrayCellDelegate;

@interface IGGradientTextStickerTrayCell : UICollectionViewCell <IGStoryStickerTooltipPresentable>
{
    CAShapeLayer *_backdropLayer;
    UILabel *_label;
    double _currentAttachmentScale;
    IGTooltipView *_tooltipView;
    double _preferredFontSize;
    _Bool _hasBackdropShadow;
    NSAttributedString *_text;
    NSArray *_gradientColors;
    double _cellPadding;
    double _cornerRadius;
    id <IGGradientTextStickerTrayCellDelegate> _delegate;
    struct UIEdgeInsets _textInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGradientTextStickerTrayCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasBackdropShadow; // @synthesize hasBackdropShadow=_hasBackdropShadow;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double preferredFontSize; // @synthesize preferredFontSize=_preferredFontSize;
@property(nonatomic) double cellPadding; // @synthesize cellPadding=_cellPadding;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void)hideToolTip;
- (void)showTooltipWithText:(id)arg1 duration:(double)arg2 analyticsTag:(id)arg3 referenceView:(id)arg4;
- (double)_maxPointSizeForAttributedText:(id)arg1 constrainingWidth:(double)arg2;
- (void)_updateGradient;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

