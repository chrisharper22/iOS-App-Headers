//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGDirectInboxCellSelectAction : NSObject
{
    _Bool _isDestructive;
    _Bool _takeSelectCountInTitle;
    NSString *_title;
    SEL _action;
    id _target;
    NSString *_titleFormatWithCount;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *titleFormatWithCount; // @synthesize titleFormatWithCount=_titleFormatWithCount;
@property(readonly, nonatomic) _Bool takeSelectCountInTitle; // @synthesize takeSelectCountInTitle=_takeSelectCountInTitle;
@property(readonly, nonatomic) _Bool isDestructive; // @synthesize isDestructive=_isDestructive;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 target:(id)arg3 isDestructive:(_Bool)arg4 takeSelectCountInTitle:(_Bool)arg5 titleFormatWithCount:(id)arg6;

@end

