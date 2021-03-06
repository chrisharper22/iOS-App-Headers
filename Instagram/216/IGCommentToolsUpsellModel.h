//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMedia, IGUserSession, NSDictionary;

@interface IGCommentToolsUpsellModel : NSObject
{
    IGUserSession *_userSession;
    IGMedia *_media;
    NSDictionary *_rowsInSections;
    unsigned long long _trigger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long trigger;
- (_Bool)isCommentDisabled;
- (id)mediaID;
- (void)updateCommentsEnabledWithModule:(id)arg1;
- (unsigned long long)rowTypeForRow:(long long)arg1 inSection:(long long)arg2;
- (id)titleForRow:(long long)arg1 inSection:(long long)arg2;
- (id)titleForHeaderInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 showLimitedComments:(_Bool)arg3 trigger:(unsigned long long)arg4;

@end

