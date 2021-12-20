//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTimeStickerDigitalViewMaskView, IGTimeStickerSingleDigitView, NSDictionary, UILabel;

@interface IGTimeStickerDigitalView : UIView
{
    IGTimeStickerSingleDigitView *_hourTensView;
    IGTimeStickerSingleDigitView *_hourOnesView;
    IGTimeStickerSingleDigitView *_minuteTensView;
    IGTimeStickerSingleDigitView *_minuteOnesView;
    IGTimeStickerDigitalViewMaskView *_mask;
    UILabel *_accessoryLabel;
    NSDictionary *_accessoryLabelAttributes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *accessoryLabelAttributes; // @synthesize accessoryLabelAttributes=_accessoryLabelAttributes;
@property(readonly, nonatomic) UILabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(readonly, nonatomic) IGTimeStickerDigitalViewMaskView *mask; // @synthesize mask=_mask;
@property(readonly, nonatomic) IGTimeStickerSingleDigitView *minuteOnesView; // @synthesize minuteOnesView=_minuteOnesView;
@property(readonly, nonatomic) IGTimeStickerSingleDigitView *minuteTensView; // @synthesize minuteTensView=_minuteTensView;
@property(readonly, nonatomic) IGTimeStickerSingleDigitView *hourOnesView; // @synthesize hourOnesView=_hourOnesView;
@property(readonly, nonatomic) IGTimeStickerSingleDigitView *hourTensView; // @synthesize hourTensView=_hourTensView;
- (id)outlinePath;
- (void)_configureWithTimeInfo:(struct IGTimeInfo)arg1 timeStyle:(long long)arg2;
- (void)configureWithDate:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

