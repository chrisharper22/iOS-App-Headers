//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@protocol IGDirectKeyboardTextViewMediaPasteDelegate;

@interface IGDirectKeyboardTextView : UITextView
{
    _Bool _canPerformActionsForMenu;
    id <IGDirectKeyboardTextViewMediaPasteDelegate> _mediaPasteDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectKeyboardTextViewMediaPasteDelegate> mediaPasteDelegate; // @synthesize mediaPasteDelegate=_mediaPasteDelegate;
- (void)_menuWillHide;
- (void)_threadCellMenuWillShow;
- (void)paste:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)didMoveToSuperview;

@end

