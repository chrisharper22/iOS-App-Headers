//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSAttributedString, NSString, NSURL;

@interface IGStoryAttributionModel : FBValueObject <NSCopying, NSCoding>
{
    _Bool _canShowChevron;
    NSString *_appID;
    NSString *_appName;
    NSURL *_attributionIconURL;
    NSString *_appActionText;
    NSURL *_contentURL;
    NSURL *_fallbackURL;
    NSAttributedString *_customAttributionString;
    NSString *_customAttributionText;
    NSURL *_previewURL;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, copy, nonatomic) NSString *customAttributionText; // @synthesize customAttributionText=_customAttributionText;
@property(readonly, copy, nonatomic) NSAttributedString *customAttributionString; // @synthesize customAttributionString=_customAttributionString;
@property(readonly, nonatomic) _Bool canShowChevron; // @synthesize canShowChevron=_canShowChevron;
@property(readonly, copy, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSString *appActionText; // @synthesize appActionText=_appActionText;
@property(readonly, copy, nonatomic) NSURL *attributionIconURL; // @synthesize attributionIconURL=_attributionIconURL;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppID:(id)arg1 appName:(id)arg2 attributionIconURL:(id)arg3 appActionText:(id)arg4 contentURL:(id)arg5 fallbackURL:(id)arg6 canShowChevron:(_Bool)arg7 customAttributionString:(id)arg8 customAttributionText:(id)arg9 previewURL:(id)arg10;
- (_Bool)isCollabAppAttribution;
- (_Bool)isFacebookAppAttribution;
- (id)attributionURL;
- (id)attributionAttributedString;

@end
