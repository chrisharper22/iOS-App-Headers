//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBReactPerfLoggerFlagData;

@interface FBReactPerfLoggerFlagView : UIView
{
    FBReactPerfLoggerFlagData *_data;
    unsigned long long _didMoveToWindow;
    unsigned long long _contentDidAppear;
    _Bool _alreadyLogged;
}

- (void).cxx_destruct;
- (void)_logDataOnceIfAvailableAndOnlyAfterAppearing;
- (void)logData:(id)arg1;
- (void)didMoveToWindow;

@end

