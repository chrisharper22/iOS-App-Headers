//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/TException.h>

@interface TApplicationException : TException
{
    int mType;
}

+ (id)exceptionWithType:(int)arg1 reason:(id)arg2;
+ (id)read:(id)arg1;
- (void)write:(id)arg1;
- (id)initWithType:(int)arg1 reason:(id)arg2;

@end

