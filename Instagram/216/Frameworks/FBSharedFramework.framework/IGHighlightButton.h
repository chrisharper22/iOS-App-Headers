//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@protocol IGHighlightButtonDelegate;

@interface IGHighlightButton : UIButton
{
    id <IGHighlightButtonDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGHighlightButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setHighlighted:(_Bool)arg1;

@end
