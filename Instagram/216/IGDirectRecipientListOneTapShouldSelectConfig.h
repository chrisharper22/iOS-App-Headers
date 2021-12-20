//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;
@protocol IGDirectRecipientListViewControllerHandling;

@interface IGDirectRecipientListOneTapShouldSelectConfig : NSObject
{
    _Bool _containsMusicSticker;
    id <IGDirectRecipientListViewControllerHandling> _recipientListVCHandler;
    IGUserSession *_userSession;
    CDUnknownBlockType _isSelectableBlock;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) _Bool containsMusicSticker; // @synthesize containsMusicSticker=_containsMusicSticker;
@property(readonly, nonatomic) CDUnknownBlockType isSelectableBlock; // @synthesize isSelectableBlock=_isSelectableBlock;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) id <IGDirectRecipientListViewControllerHandling> recipientListVCHandler; // @synthesize recipientListVCHandler=_recipientListVCHandler;
- (id)initWithRecipientListVCHandler:(id)arg1 userSession:(id)arg2 isSelectableBlock:(CDUnknownBlockType)arg3 containsMusicSticker:(_Bool)arg4 analyticsModule:(id)arg5;

@end
