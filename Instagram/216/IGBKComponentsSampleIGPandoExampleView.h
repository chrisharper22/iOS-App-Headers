//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol IGBKComponentsSampleIGPandoExampleViewDelegate;

@interface IGBKComponentsSampleIGPandoExampleView : UIView
{
    long long _randomNumber;
    id <IGBKComponentsSampleIGPandoExampleViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBKComponentsSampleIGPandoExampleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onFetchRandomNumberButtonClicked;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateRandonNumber:(long long)arg1;

@end

