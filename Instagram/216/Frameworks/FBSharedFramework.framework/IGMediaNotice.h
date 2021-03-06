//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSString;

@interface IGMediaNotice : NSObject <NSCoding>
{
    NSString *_text;
    NSString *_subText;
    NSString *_icon;
    NSString *_url;
}

+ (id)mediaNoticeForDict:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 subText:(id)arg2 icon:(id)arg3 url:(id)arg4;

@end

