//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGenericMegaphone, IGMedia, IGStoryReel, NSString;

@interface IGBrandedContentViolationResponse : NSObject
{
    IGGenericMegaphone *_megaphone;
    IGMedia *_media;
    IGStoryReel *_reel;
    NSString *_mediaId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) IGStoryReel *reel; // @synthesize reel=_reel;
@property(retain, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(retain, nonatomic) IGGenericMegaphone *megaphone; // @synthesize megaphone=_megaphone;
- (id)initWithViolationMegaphone:(id)arg1 media:(id)arg2 reel:(id)arg3 mediaId:(id)arg4;

@end
