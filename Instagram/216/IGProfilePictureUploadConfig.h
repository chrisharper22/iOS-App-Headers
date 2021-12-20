//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, UIImage;

@interface IGProfilePictureUploadConfig : NSObject
{
    _Bool _postToFeed;
    UIImage *_profilePicture;
    long long _fromOption;
    IGUserSession *_userSession;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(readonly, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) _Bool postToFeed; // @synthesize postToFeed=_postToFeed;
@property(readonly, nonatomic) long long fromOption; // @synthesize fromOption=_fromOption;
@property(readonly, nonatomic) UIImage *profilePicture; // @synthesize profilePicture=_profilePicture;
- (id)initWithProfilePicture:(id)arg1 fromOption:(long long)arg2 postToFeed:(_Bool)arg3 userSession:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

@end

