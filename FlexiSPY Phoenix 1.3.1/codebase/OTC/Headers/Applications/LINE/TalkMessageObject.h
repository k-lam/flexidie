/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

@class NSData, NSNumber, NSString, TalkUserObject, TalkChatObject, NSDate;

__attribute__((visibility("hidden")))
@interface TalkMessageObject : NSObject {
	float cellHeight;
	float cellHeightLandscape;
	BOOL containsTooLongLine;
	BOOL containsTooLongLineLandscape;
	id contentMetadataModel;
}
@property(assign, nonatomic) int sendStatusValue;
@property(assign, nonatomic) int contentTypeValue;
@property(retain, nonatomic) id contentMetadataModel;
@property(assign, nonatomic) BOOL containsTooLongLineLandscape;
@property(assign, nonatomic) BOOL containsTooLongLine;
@property(assign, nonatomic) float cellHeightLandscape;
@property(assign, nonatomic) float cellHeight;
@property(retain, nonatomic) TalkChatObject* chat;
@property(retain, nonatomic) TalkUserObject* sender;
@property(assign, nonatomic) int sticker;
@property(assign, nonatomic) double callInterval;
@property(retain, nonatomic) NSNumber* callResult;
@property(assign, nonatomic) CGSize thumbnailSize;
@property(readonly, assign, nonatomic) NSDate* displayDate;
@property(retain, nonatomic) NSData* contentMetadata;
@property(retain, nonatomic) NSData* thumbnail;
@property(retain, nonatomic) NSNumber* readCount;
@property(retain, nonatomic) NSString* text;
@property(retain, nonatomic) NSNumber* latitude;
@property(retain, nonatomic) NSNumber* contentType;
@property(retain, nonatomic) NSNumber* longitude;
@property(retain, nonatomic) NSNumber* sendStatus;
@property(retain, nonatomic) NSString* messageType;
@property(retain, nonatomic) NSNumber* timestamp;
@property(retain, nonatomic) NSString* id;
+(void)removeAllMessagesInManagedObjectContext:(id)managedObjectContext;
+(void)resetAllMessageCellHeightInManagedObjectContext:(id)managedObjectContext;
+(id)imageMessagesInChat:(id)chat inManagedObjectContext:(id)managedObjectContext;
+(id)insertWithMessage:(id)message inManagedObjectContext:(id)managedObjectContext;
+(id)lastMessageInManagedObjectContext:(id)managedObjectContext;
+(id)messageWithObjectID:(id)objectID inManagedObjectContext:(id)managedObjectContext;
+(id)messageWithID:(id)anId inManagedObjectContext:(id)managedObjectContext;
+(BOOL)messageExistsWithID:(id)anId inManagedObjectContext:(id)managedObjectContext;
+(id)timeLabelFromInterval:(double)interval;
+(int)callResultFromString:(id)string;
+(id)entityInManagedObjectContext:(id)managedObjectContext;
+(void)initialize;
+(id)newTemporaryIDWithRequestSequence:(int)requestSequence;
+(id)messageByRequestSequence:(int)sequence inContext:(id)context;
+(void)messageSent:(id)sent withRequestSequence:(int)requestSequence inContext:(id)context;
+(id)newMessageInChat:(id)chat withText:(id)text requestSequence:(int)sequence image:(id)image location:(id)location sticker:(int)sticker contentType:(int)type contentMetadata:(id)metadata;
-(BOOL)isSendMessage;
-(BOOL)isReceivedMessage;
-(BOOL)isSystemMessage;
-(id)textForExport:(id)aExport;
-(BOOL)isMyMessage;
-(id)callLabelLong;
-(id)callLabelShort;
-(id)callLabelWithKeySuffix:(id)keySuffix;
-(BOOL)line_isSending;
-(void)line_setSending:(BOOL)sending;
-(id)initInsertedIntoManagedObjectContext:(id)context;
-(id)lineLocation;
-(int)line_contentUploadType;
-(id)audioFileURL;
-(id)audioFileName;
-(id)imageData;
-(id)imageFileURL;
-(id)imageName;
-(id)imageURL;
-(id)temporaryImageName;
-(id)address;
-(id)locationText;
-(id)lineMessageValue;
-(int)requestSequence;
-(BOOL)hasTemporaryID;
-(void)setTemporaryIDWithRequestSequence:(int)requestSequence;
-(void)line_updateWithLineMessage:(id)lineMessage;
-(void)line_messageSent:(id)sent;
-(void)line_uploadAV:(int)av;
-(void)line_uploadImage;
-(void)line_sendContent;
-(void)cancel;
-(void)send;
-(id)initWithLineMessage:(id)lineMessage from:(id)from inContext:(id)context;
-(BOOL)contactTypeObjectFromInfoDictionary:(id)infoDictionary;
-(id)contactModel;
-(BOOL)couponTypeObjectFromInfoDictionary:(id)infoDictionary title:(id)title;
-(id)couponModel;
-(BOOL)appLinkTypeObjectFromInfoDictionary:(id)infoDictionary;
-(id)appLinkModel;
-(BOOL)groupBoardTypeObjectFromInfoDictionary:(id)infoDictionary;
-(id)groupBoardModel;
-(BOOL)makeMetadataModelWithInfoDict:(id)infoDict;
@end

