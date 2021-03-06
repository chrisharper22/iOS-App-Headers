//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/UITextFieldDelegate-Protocol.h>

@class NSString;
@protocol UITextFieldDelegate;

@interface IGTextFieldLengthConstraint : NSObject <UITextFieldDelegate>
{
    struct {
        unsigned int shouldChangeCharactersInRange:1;
    } _delegateFlags;
    unsigned long long _maxLength;
    id <UITextFieldDelegate> _textFieldDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UITextFieldDelegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithMaxLength:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

