//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;

@interface IGCommentNUXManager : NSObject
{
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)reset;
- (void)turnOffNuxForNuxType:(unsigned long long)arg1;
- (_Bool)canShowNuxForNuxType:(unsigned long long)arg1 entryPoint:(long long)arg2;
- (id)_initWithUserSession:(id)arg1;

@end
