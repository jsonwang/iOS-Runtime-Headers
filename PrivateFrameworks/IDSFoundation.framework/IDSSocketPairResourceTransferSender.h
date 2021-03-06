/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage {
    BOOL  _compressPayload;
    BOOL  _compressed;
    BOOL  _done;
    BOOL  _expectsPeerResponse;
    int  _fileDescriptor;
    unsigned int  _maxChunkSize;
    NSString * _messageUUID;
    NSDictionary * _metadata;
    unsigned long long  _nextByte;
    NSString * _peerResponseIdentifier;
    NSDictionary * _resourceAttributes;
    NSString * _resourcePath;
    BOOL  _resumeResourceTransfers;
    BOOL  _sentFirstMessage;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
    unsigned long long  _totalBytes;
    BOOL  _wantsAppAck;
}

@property (nonatomic, readonly) BOOL isDone;
@property (nonatomic) unsigned int maxChunkSize;
@property (nonatomic, readonly, retain) NSString *messageUUID;
@property (nonatomic) unsigned long long nextByte;
@property (nonatomic) BOOL resumeResourceTransfers;
@property (nonatomic, readonly) BOOL sentFirstMessage;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;

- (unsigned char)command;
- (void)dealloc;
- (id)description;
- (id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned int)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(BOOL)arg5 wantsAppAck:(BOOL)arg6 compressPayload:(BOOL)arg7 compressed:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10;
- (BOOL)isDone;
- (unsigned int)maxChunkSize;
- (id)messageUUID;
- (unsigned long long)nextByte;
- (id)nextMessage;
- (id)nextMessage_old;
- (id)readNextBytes;
- (BOOL)readNextBytes:(id*)arg1 byteOffset:(unsigned long long*)arg2;
- (void)reset;
- (BOOL)resumeResourceTransfers;
- (BOOL)sentFirstMessage;
- (unsigned int)sequenceNumber;
- (void)setMaxChunkSize:(unsigned int)arg1;
- (void)setNextByte:(unsigned long long)arg1;
- (void)setResumeResourceTransfers:(BOOL)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setStreamID:(unsigned short)arg1;
- (unsigned short)streamID;

@end
