//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITapGestureRecognizer, UIView;

@protocol FOAOmniGridViewDelegate <NSObject>
- (void)omniGridDidTapFloatingParticipantsView;
- (void)omniGridDidTapFloatingSelfView:(UIView *)arg1;
- (void)omniGridDidTap:(UIView *)arg1 recognizer:(UITapGestureRecognizer *)arg2 inSelfView:(_Bool)arg3;
@end

